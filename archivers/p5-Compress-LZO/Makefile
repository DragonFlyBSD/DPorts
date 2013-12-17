# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: archivers/p5-Compress-LZO/Makefile 336153 2013-12-11 10:04:56Z bapt $

PORTNAME=	Compress-LZO
PORTVERSION=	1.08
PORTREVISION=	2
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to the LZO compression library

LIB_DEPENDS=	liblzo2.so:${PORTSDIR}/archivers/lzo2

CFLAGS+=	-I${LOCALBASE}/include/lzo
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -i '' -e 's|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
