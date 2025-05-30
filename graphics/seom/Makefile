PORTNAME=	seom
PORTVERSION=	2010011201
PORTREVISION=	4
CATEGORIES=	graphics
MASTER_SITES=	LOCAL/bms

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Real-time capture library for OpenGL applications
WWW=		https://github.com/wereHamster/yukon

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=		amd64 i386
ONLY_FOR_ARCHS_REASON=	not yet ported to any arch other than x86

USES=		gl gmake tar:bzip2 xorg
USE_XORG=	x11 xv xext
USE_GL=		gl
USE_LDCONFIG=	yes
MAKE_ENV=	DATADIR="${DATADIR}"

.include <bsd.port.pre.mk>

.if ${ARCH} == x86_64 || ${ARCH} == i386
BUILD_DEPENDS+=	yasm:devel/yasm
.endif

post-patch:
	@${ECHO_CMD} 1.0-196 > ${WRKSRC}/VERSION

post-install:
.for f in seom-filter seom-server seom-player
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${f}
.endfor
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libseom.so

#
# To roll snapshot: as bms: make BOOTSTRAP=defined fetch
#
.if defined(BOOTSTRAP)
.if ${WITH_SUBVERSION_VER:U} == LTS
FETCH_DEPENDS+=	svn:devel/subversion-lts
.else
FETCH_DEPENDS+=	svn:devel/subversion
.endif
SVN_REV=	196		# svn tip at epoch 2009120801
SVNROOT_URI=	https://devel.neopsis.com/svn/seom

do-fetch:
	${MKDIR} ${WRKDIR}
	svn export -r ${SVN_REV} ${SVNROOT_URI}/trunk ${WRKSRC}
	cd ${WRKDIR}; tar cvfy ${DISTDIR}/${DISTNAME}.tar.bz2 ${DISTNAME}
.if ${USER} == bms
	${CHMOD} ugo+r ${DISTDIR}/${DISTNAME}.tar.bz2
	scp -p ${DISTDIR}/${DISTNAME}.tar.bz2 \
	    freefall.freebsd.org:public_distfiles/
.endif
.endif # defined(BOOTSTRAP)

.include <bsd.port.post.mk>
