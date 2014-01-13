# Created by: Steve Wills <steve@mouf.net>
# $FreeBSD: www/p5-CGI-EncryptForm/Makefile 338776 2014-01-05 13:53:37Z az $

PORTNAME=	CGI-EncryptForm
PORTVERSION=	1.02
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MARAL
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Implement trusted stateful CGI Form Data using cryptography

BUILD_DEPENDS=	p5-Crypt-HCE_SHA>=0:${PORTSDIR}/security/p5-Crypt-HCE_SHA \
		p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
