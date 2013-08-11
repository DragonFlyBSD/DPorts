# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: security/p5-Crypt-DES/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Crypt-DES
PORTVERSION=	2.05
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to DES block cipher

BUILD_DEPENDS=	p5-Crypt-CBC>=0:${PORTSDIR}/security/p5-Crypt-CBC
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Crypt::DES.3

.include <bsd.port.mk>
