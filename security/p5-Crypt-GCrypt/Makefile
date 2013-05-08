# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: security/p5-Crypt-GCrypt/Makefile 317220 2013-05-03 16:36:39Z ehaupt $

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

PERL_CONFIGURE=	yes
CONFIGURE_ARGS+=	GCRYPTLIBPATH=${LOCALBASE}/lib \
		GCRYPTINCPATH=${LOCALBASE}/include

MAN3=		Crypt::GCrypt.3 Crypt::GCrypt::MPI.3

.include <bsd.port.mk>
