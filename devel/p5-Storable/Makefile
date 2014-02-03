# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: devel/p5-Storable/Makefile 341711 2014-01-29 10:57:06Z az $

PORTNAME=	Storable
PORTVERSION=	2.45
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Persistency for perl data structures

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -i '' -e 's|INSTALLDIRS.*||' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
