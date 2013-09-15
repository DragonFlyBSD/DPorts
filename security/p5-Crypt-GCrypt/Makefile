# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: security/p5-Crypt-GCrypt/Makefile 326996 2013-09-11 17:17:46Z az $

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

MAN3=		Crypt::GCrypt.3 Crypt::GCrypt::MPI.3

.include <bsd.port.mk>
