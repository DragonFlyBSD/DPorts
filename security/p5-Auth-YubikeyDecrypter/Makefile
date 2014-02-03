# Created by: Kurt Jaeger <fbsd-ports@opsec.eu>
# $FreeBSD: security/p5-Auth-YubikeyDecrypter/Makefile 341825 2014-01-30 09:42:48Z az $

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

.include <bsd.port.mk>
