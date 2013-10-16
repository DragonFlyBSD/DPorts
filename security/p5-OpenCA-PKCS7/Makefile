# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: security/p5-OpenCA-PKCS7/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	OpenCA-PKCS7
PORTVERSION=	0.9.1.1.1
PORTEPOCH=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MADWOLF
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for basic handling PKCS\#7 Signatures

BUILD_DEPENDS=	p5-OpenCA-OpenSSL>=0:${PORTSDIR}/security/p5-OpenCA-OpenSSL \
		p5-OpenCA-X509>=0:${PORTSDIR}/security/p5-OpenCA-X509 \
		p5-X500-DN>=0:${PORTSDIR}/net/p5-X500-DN
RUN_DEPENDS:=	${BUILD_DEPENDS}

PORTSCOUT=	skipv:0.9.13

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
.include <bsd.port.mk>
