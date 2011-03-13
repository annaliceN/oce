//============================================================================
//==== Titre: AlienImage_SUNRFFileHeader.hxx
//==== Role : The header file of primitve type "SUNRFFileHeader" 
//==== Implementation:  This is a primitive type implemented with typedef
//====        typedef SUNRFSUNRFFileHeader AlienImage_SUNRFFileHeader;
//============================================================================

#ifndef _AlienImage_SUNRFFileHeader_HeaderFile
#define _AlienImage_SUNRFFileHeader_HeaderFile

//==== Definition de Type ====================================================
#include <Standard_Type.hxx>
const Handle(Standard_Type)& STANDARD_TYPE(AlienImage_SUNRFFileHeader);
//============================================================================

#define	RAS_MAGIC	0x59a66a95

	/* Sun supported ras_type's */
#define RT_OLD		0	/* Raw pixrect image in 68000 byte order */
#define RT_STANDARD	1	/* Raw pixrect image in 68000 byte order */
#define RT_BYTE_ENCODED	2	/* Run-length compression of bytes */
#define RT_FORMAT_RGB	3	/* XRGB or RGB instead of XBGR or BGR */
#define RT_FORMAT_TIFF	4	/* tiff <-> standard rasterfile */
#define RT_FORMAT_IFF	5	/* iff (TAAC format) <-> standard rasterfile */
#define RT_EXPERIMENTAL 0xffff	/* Reserved for testing */

	/* Sun registered ras_maptype's */
#define RMT_RAW		2
	/* Sun supported ras_maptype's */
#define RMT_NONE	0	/* ras_maplength is expected to be 0 */
#define RMT_EQUAL_RGB	1	/* red[ras_maplength/3],green[],blue[] */

/*
 * NOTES:
 * 	Each line of the image is rounded out to a multiple of 16 bits.
 *   This corresponds to the rounding convention used by the memory pixrect
 *   package (/usr/include/pixrect/memvar.h) of the SunWindows system.
 *	The ras_encoding field (always set to 0 by Sun's supported software)
 *   was renamed to ras_length in release 2.0.  As a result, rasterfiles
 *   of type 0 generated by the old software claim to have 0 length; for
 *   compatibility, code reading rasterfiles must be prepared to compute the
 *   true length from the width, height, and depth fields.
 */


typedef struct  {
	int	ras_magic;		/* magic number */
	int	ras_width;		/* width (pixels) of image */
	int	ras_height;		/* height (pixels) of image */
	int	ras_depth;		/* depth (1, 8, or 24 bits) of pixel */
	int	ras_length;		/* length (bytes) of image */
	int	ras_type;		/* type of file; see RT_* below */
	int	ras_maptype;		/* type of colormap; see RMT_* below */
	int	ras_maplength;		/* length (bytes) of following map */
	/* color map follows for ras_maplength bytes, followed by image */
} AlienImage_SUNRFFileHeader;

ostream& operator << ( ostream& s,  const AlienImage_SUNRFFileHeader& h );

Standard_Boolean   operator==(const AlienImage_SUNRFFileHeader& Obj1,
			      const AlienImage_SUNRFFileHeader& Obj2) ;
void ShallowDump (const AlienImage_SUNRFFileHeader& AnObject,Standard_OStream& S)  ;

#endif
 
