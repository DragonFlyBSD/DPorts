# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: archivers/p5-Compress-LZO/Makefile 328272 2013-09-25 12:19:08Z vanilla $

PORTNAME=	Compress-LZO
PORTVERSION=	1.08
PORTREVISION=	2
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to the LZO compression library

LIB_DEPENDS=	lzo2:${PORTSDIR}/archivers/lzo2

CFLAGS+=	-I${LOCALBASE}/include/lzo
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -i '' -e 's|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
