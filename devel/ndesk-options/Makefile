# $FreeBSD: devel/ndesk-options/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	ndesk-options
PORTVERSION=	0.2.1
CATEGORIES=	devel
MASTER_SITES=	http://www.ndesk.org/archive/${PORTNAME}/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Callback-based program option parser for C\#

BUILD_DEPENDS=	mono:${PORTSDIR}/lang/mono
RUN_DEPENDS=	mono:${PORTSDIR}/lang/mono

GNU_CONFIGURE=	yes
USES=		pkgconfig
USE_GMAKE=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|[(]libdir[)]/pkgconfig|(prefix)/libdata/pkgconfig|g' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
