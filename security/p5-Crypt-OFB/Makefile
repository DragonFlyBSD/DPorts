# Created by: clsung
# $FreeBSD: security/p5-Crypt-OFB/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt-OFB
PORTVERSION=	0.01
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Encrypt Data using OFB Mode

BUILD_DEPENDS=	p5-Crypt-ECB>=0:${PORTSDIR}/security/p5-Crypt-ECB
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Crypt::OFB.3

NO_STAGE=	yes
.include <bsd.port.mk>
