# New ports collection makefile for:    xorg-drivers
# Date created:				Jun 22 2006
# Whom:					Florent Thoumie <flz@FreeBSD.org>
#
# $FreeBSD: ports/x11-drivers/xorg-drivers/Makefile,v 1.24 2012/11/17 06:03:26 svnexp Exp $
#

PORTNAME=	xorg-drivers
PORTVERSION=	7.5.2
CATEGORIES=	x11-drivers
MASTER_SITES=	# none
DISTFILES=	# none
EXTRACT_ONLY=	# none

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.org drivers meta-port

VIDEODIR=	${PREFIX}/lib/xorg/modules/drivers
INPUTDIR=	${PREFIX}/lib/xorg/modules/input

NO_BUILD=	yes

.if !defined(ARCH)
ARCH!=  /usr/bin/uname -p
.endif

VIDEO_ON=	ati \
		mach64 \
		nv \
		r128 \
		radeonhd \
		vesa

.if ${ARCH} == "sparc64"
VIDEO_ON+=	sunffb
.elif ${ARCH} == "amd64" || ${ARCH} == "i386" || ${ARCH} == "ia64"
VIDEO_ON+=	openchrome
.endif

.if (${ARCH} == "amd64" || ${ARCH} == "i386") && !defined(WITH_NEW_XORG)
VIDEO_ON+=	intel
.endif

VIDEO_OFF=	apm ark \
		chips cirrus cyrix \
		dummy \
		fbdev \
		glint \
		i128 i740 imstt \
		mga \
		neomagic newport \
		rendition \
		s3 s3virge savage siliconmotion	sis \
		tdfx tga trident tseng \
		via vmware voodoo

VIDEO_EXCL=	via:openchrome

INPUT_ON=	mouse \
		keyboard
INPUT_OFF=	acecad \
		elographics \
		hyperpen \
		joystick \
		magictouch mutouch \
		penmount \
		synaptics \
				vmmouse void

QUIRKS=		keyboard:kbd jamstudio:js_x

.if defined(XORG_COMPLETE)
. for type in input video
${type:tu}_ON:=	${${type:tu}_ON} ${${type:tu}_OFF}
${type:tu}_OFF=	# nil
.  for i in ${${type:tu}_EXCL}
B=	${i:C/.*://}
${type:tu}_ON:=	${${type:tu}_ON:C/${B}//}
${type:tu}_OFF:=	${${type:tu}_OFF} ${B}
.  endfor
. endfor
.endif

.for default in on off
. for type in input video
.  for i in ${${type:tu}_${default:tu}}
OPTIONS+=	${i:tu} "Install ${i} ${type} driver" ${default}
.  endfor
. endfor
.endfor

.include <bsd.port.pre.mk>

.for i in ${VIDEO_EXCL}
A=	${i:C/:.*//}
B=	${i:C/.*://}
. if defined(WITH_${B:tu}) && !defined(WITHOUT_${A:tu})
DRV_CONFLICTS+=	${i}
. endif
.endfor

.if defined(DRV_CONFLICTS)
IGNORE=		can't be installed because of conflicting drivers (${DRV_CONFLICTS}). Re-run make config.
.endif

.for default in on off
. for type in input video
.  for i in ${${type:tu}_${default:tu}}
DEFAULT=${default}
.   if (${DEFAULT} == "on" && !defined(WITHOUT_${i:tu})) || (${DEFAULT} == "off" && defined(WITH_${i:tu}))
.    if ${QUIRKS:M${i}\:*:C/.*://} != ""
RUN_DEPENDS+=	${${type:tu}DIR}/${QUIRKS:M${i}\:*:C/.*://}_drv.so:${PORTSDIR}/x11-drivers/xf86-${type}-${i}
.    else
RUN_DEPENDS+=	${${type:tu}DIR}/${i}_drv.so:${PORTSDIR}/x11-drivers/xf86-${type}-${i}
.    endif
.   endif
.  endfor
. endfor
.endfor

do-install:
		${MKDIR} ${PREFIX}/libdata/xorg
		${TOUCH} ${PREFIX}/libdata/xorg/drivers

.include <bsd.port.post.mk>
