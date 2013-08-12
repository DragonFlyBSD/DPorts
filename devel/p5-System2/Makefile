# Created by: tobez
# $FreeBSD: devel/p5-System2/Makefile 324174 2013-08-02 18:52:07Z mat $

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

pre-configure:
	${RM} -f ${WRKSRC}/io_test.pl

.include <bsd.port.mk>
