# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: devel/p5-Storable/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Storable
PORTVERSION=	2.45
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Persistency for perl data structures

USES=		perl5
USE_PERL5=	configure

MAN3=		Storable.3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -i '' -e 's|INSTALLDIRS.*||' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
