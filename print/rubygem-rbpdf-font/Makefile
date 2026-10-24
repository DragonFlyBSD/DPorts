PORTNAME=	rbpdf-font
PORTVERSION=	1.19.1
PORTREVISION=	1
CATEGORIES=	print rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	RBPDF font files
WWW=		https://github.com/naitoh/rbpdf/tree/master/rbpdf-font

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

USES=		gem

NO_ARCH=	yes

post-patch:
	@${STRIP_CMD} ${WRKSRC}/lib/fonts/ttf2ufm/ttf2ufm

.if defined(DEVELOPER)
.MAKEFLAGS+=	DFLY_ALLOW_FOREIGN_BINARIES=yes
DFLY_ALLOW_FOREIGN_BINARIES=yes
NO_ARCH_IGNORE=	ttf2ufm
.endif

.include <bsd.port.mk>
