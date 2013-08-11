# Created by: nork@FreeBSD.org
# $FreeBSD: security/p5-Crypt-RC6/Makefile 324174 2013-08-02 18:52:07Z mat $

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

do-patch:
	${REINPLACE_CMD} -e 's///' ${WRKSRC}/RC6.pm

.include <bsd.port.mk>
