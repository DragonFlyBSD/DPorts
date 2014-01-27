# Created by: Tatsuki Makino <tatsuki_makino@hotmail.com>
# $FreeBSD: security/p5-Mcrypt/Makefile 341049 2014-01-25 16:30:47Z mat $

PORTNAME=	Mcrypt
PORTVERSION=	2.5.7.0
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JESUS
PKGNAMEPREFIX=	p5-

MAINTAINER=	tatsuki_makino@hotmail.com
COMMENT=	Perl extension for the Mcrypt cryptography library

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

LIB_DEPENDS=	libmcrypt.so:${PORTSDIR}/security/libmcrypt

CONFIGURE_ENV=	MCRYPT_CPPFLAGS=${CPPFLAGS}
USE_PERL5=	configure
USES=		perl5

CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
