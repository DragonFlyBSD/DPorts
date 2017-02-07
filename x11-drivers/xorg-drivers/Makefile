# $FreeBSD$

PORTNAME=	xorg-drivers
PORTVERSION=	7.7
PORTREVISION=	4
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.org drivers meta-port

VIDEODIR=	${LOCALBASE}/lib/xorg/modules/drivers
INPUTDIR=	${LOCALBASE}/lib/xorg/modules/input

USES=		metaport

INPUT_DRIVERS=		mouse \
			keyboard \
			acecad \
			elographics \
			hyperpen \
			joystick \
			mutouch \
			penmount \
			synaptics \
			vmmouse \
			void \
			wacom

VIDEO_DRIVERS=		nv \
			vesa \
			apm \
			ark \
			ast \
			dummy \
			glint \
			i128 \
			i740 \
			mga \
			s3 \
			tdfx \
			trident \
			tseng \
			vmware

VIDEO_DRIVERS_REMOVED=	mach64 \
			r128 \
			chips \
			neomagic \
			rendition \
			s3virge \
			savage \
			siliconmotion \
			sis \
			voodoo

OPTIONS_DEFAULT=	MOUSE \
			KEYBOARD \
			NV \
			VESA

.for type in input video
. for a in ${${type:tu}_DRIVERS}
OPTIONS_DEFINE+=	${a:tu}
${a:tu}_DESC=	Install ${a} ${type} driver
. endfor
.endfor

OPTIONS_DEFINE_i386=	ATI INTEL OPENCHROME
OPTIONS_DEFAULT_i386=	ATI INTEL OPENCHROME

OPTIONS_DEFINE_x86_64:=	ATI INTEL29 OPENCHROME
OPTIONS_DEFAULT_x86_64:=	ATI INTEL29 OPENCHROME

OPTIONS_DEFINE_sparc64=	SUNFFB
OPTIONS_DEFAULT_sparc64=SUNFFB

OPTIONS_DEFINE_ia64=	OPENCHROME
OPTIONS_DEFAULT_ia64=	OPENCHROME

ATI_DESC=		Install ati video driver
INTEL29_DESC=		Install intel video driver
OPENCHROME_DESC=	Install openchrome video driver
SUNFFB_DESC=		Install sunffb video driver

# these drivers have a different module name compared to the plugin they install
QUIRKS=		keyboard:kbd intel29:intel

.include <bsd.port.options.mk>

# Manual add arch specific drivers so they be added to depend lines.
.if ${ARCH}==i386
VIDEO_DRIVERS+=	ati intel openchrome
.endif

.if ${ARCH}==x86_64
VIDEO_DRIVERS+=	ati intel29 openchrome
.endif

.if ${ARCH}==sparc64
VIDEO_DRIVERS+=	sunffb
.endif

.for type in input video
. for i in ${${type:tu}_DRIVERS}
.  if ${PORT_OPTIONS:M${i:tu}} != ""
.   if ${QUIRKS:M${i}\:*:C/.*://} != ""
RUN_DEPENDS+=	${${type:tu}DIR}/${QUIRKS:M${i}\:*:C/.*://}_drv.so:x11-drivers/xf86-${type}-${i}
.   else
RUN_DEPENDS+=	${${type:tu}DIR}/${i}_drv.so:x11-drivers/xf86-${type}-${i}
.   endif
.  endif
. endfor
.endfor

.include <bsd.port.mk>
