# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: devel/p5-Storable/Makefile 324276 2013-08-05 15:05:29Z az $

PORTNAME=	Storable
PORTVERSION=	2.39
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Persistency for perl data structures

USES=		perl5
USE_PERL5=	configure

MAN3=		Storable.3

post-patch:
	@${REINPLACE_CMD} -i '' -e 's|INSTALLDIRS.*||' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
