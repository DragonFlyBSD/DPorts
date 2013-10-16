# Created by: Kurt Jaeger <fbsd-ports@opsec.eu>
# $FreeBSD: security/p5-Auth-YubikeyDecrypter/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Auth-YubikeyDecrypter
PORTVERSION=	0.07
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MASSYN
PKGNAMEPREFIX=	p5-
DISTNAME=	Auth-Yubikey_Decrypter-${PORTVERSION}

MAINTAINER=	fbsd-ports@opsec.eu
COMMENT=	Decrypting the output from the yubikey token

RUN_DEPENDS=	p5-Crypt-Rijndael>=1:${PORTSDIR}/security/p5-Crypt-Rijndael

LICENSE=	GPLv2
USES=		perl5
USE_PERL5=	configure

MAN3=		Auth::Yubikey_Decrypter.3

NO_STAGE=	yes
.include <bsd.port.mk>
