# Created by: nork@FreeBSD.org
# $FreeBSD: security/p5-Crypt-RC6/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt-RC6
PORTVERSION=	1.0
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl implementation of the RC6 encryption algorithm

USES=		perl5
USE_PERL5=	configure

MAN3=		Crypt::RC6.3

NO_STAGE=	yes
do-patch:
	${REINPLACE_CMD} -e 's///' ${WRKSRC}/RC6.pm

.include <bsd.port.mk>
