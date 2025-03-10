#ifndef _bmp_h_
#define _bmp_h_

typedef struct PACKED {
	u16 type;			/* Magic identifier            */
	u8  size[4];                       /* File size in bytes          */
	u16 reserved1, reserved2;
	u32 offset;                     /* Offset to image data, bytes */
} HEADER;

static_assert(sizeof(HEADER)==14,"HEADER wrong size");

typedef struct {
	u32 size;						/* Header size in bytes      */
	u32 width,height;				/* Width and height of image */
	u16 planes;						/* Number of colour planes   */
	u16 bits;						/* Bits per pixel            */
	u32 compression;				/* Compression type          */
	u32 imagesize;					/* Image size in bytes       */
	u32 xresolution,yresolution;	/* Pixels per meter          */
	u32 ncolours;					/* Number of colours         */
	u32 importantcolours;			/* Important colours         */
} INFOHEADER;

static_assert(sizeof(INFOHEADER)==40,"INFOHEADER wrong size");

#endif //_bmp_h_
