# Created by: Michael Haro <mharo@FreeBSD.org>
# $FreeBSD: converters/p5-Convert-PEM/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Convert-PEM
PORTVERSION=	0.08
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Read/write access to ASN.1-encoded PEM files with optional encryption

RUN_DEPENDS=	p5-Class-ErrorHandler>=0:${PORTSDIR}/devel/p5-Class-ErrorHandler \
		p5-Convert-ASN1>=0.10:${PORTSDIR}/converters/p5-Convert-ASN1 \
		p5-Crypt-DES_EDE3>=0:${PORTSDIR}/security/p5-Crypt-DES_EDE3
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Convert::PEM.3 Convert::PEM::CBC.3

.include <bsd.port.mk>
