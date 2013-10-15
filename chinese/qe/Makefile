# Created by: Shen Chuan-Hsing
# $FreeBSD: chinese/qe/Makefile 329467 2013-10-05 15:18:44Z sunpoet $

PORTNAME=	qe
PORTVERSION=	0.1.1
PORTREVISION=	2
CATEGORIES=	chinese
MASTER_SITES=	http://www.cc.ncu.edu.tw/~center5/product/qe/ \
		ftp://freebsd.sinica.edu.tw/pub/statue/qe/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	QE is a PE2-like editor program under U*nix

GNU_CONFIGURE=	yes
USES=		gmake

post-configure:
	@${REINPLACE_CMD} -e '49s,-s,,' ${WRKSRC}/src/Makefile

.include <bsd.port.mk>
