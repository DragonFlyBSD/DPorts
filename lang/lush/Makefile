# Created by: David Yeske <dyeske@gmail.com>
# $FreeBSD: lang/lush/Makefile 327741 2013-09-20 19:53:09Z bapt $

PORTNAME=	lush
PORTVERSION=	1.2.1
PORTREVISION=	9
CATEGORIES=	lang
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	High level object-oriented programming language

USES=		gettext
USE_XORG=	xt xft
USE_GL=		yes
USE_SDL=	sdl image
GNU_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/lush

CONFIGURE_ENV=	LIBS="${LIBS} ${PTHREAD_LIBS} -lintl -lfontconfig -L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

CONFIGURE_ARGS=	--without-bfd

MAN1=		lush.1

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
BROKEN=		Does not build on sparc64
.endif

post-patch:
	@${REINPLACE_CMD} -E -e \
		's|opt=.+$$||; \
		s|-O3||; \
		s|-Wall||; \
		s|-pthread|${PTHREAD_LIBS}|' \
		${WRKSRC}/configure

pre-install:
	@${FIND} ${WRKSRC}/ -name "*.bak" -delete

.include <bsd.port.post.mk>
