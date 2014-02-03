# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: security/p5-Crypt-GCrypt/Makefile 341821 2014-01-30 09:08:26Z az $

PORTNAME=	Crypt-GCrypt
PORTVERSION=	1.25
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kaoru@kaisei.org
COMMENT=	Perl interface to the GNU Cryptographic library

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

LIB_DEPENDS=	gcrypt:${PORTSDIR}/security/libgcrypt

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS+=	GCRYPTLIBPATH=${LOCALBASE}/lib \
		GCRYPTINCPATH=${LOCALBASE}/include

.include <bsd.port.mk>
