# Created by: Masanori Kiriake <seiken@nbs.co.jp>
# $FreeBSD: converters/aish/Makefile 327715 2013-09-20 16:05:24Z bapt $

PORTNAME=	aish
PORTVERSION=	1.13
CATEGORIES=	converters
MASTER_SITES=	http://hp.vector.co.jp/authors/VA004474/etc/
DISTNAME=	${PORTNAME}${PORTVERSION:S/.//}u

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Ish/uuencode/Base64 converter

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${PREFIX}/share/doc/ja/aish
	${INSTALL_DATA} ${WRKSRC}/aish.txt ${PREFIX}/share/doc/ja/aish
.endif

.include <bsd.port.mk>
