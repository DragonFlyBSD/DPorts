# Created by: tobez
# $FreeBSD: devel/p5-System2/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	System2
PORTVERSION=	0.84
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	System2 - like system(), but with STDERR available as well

USES=		perl5
USE_PERL5=	configure

MAN3=		System2.3

NO_STAGE=	yes
pre-configure:
	${RM} -f ${WRKSRC}/io_test.pl

.include <bsd.port.mk>
