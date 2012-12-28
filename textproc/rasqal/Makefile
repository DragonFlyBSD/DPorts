# ex:ts=8
# New ports collection makefile for:	redland
# Date created:			Nov 22, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/textproc/rasqal/Makefile,v 1.46 2012/12/10 19:24:05 svnexp Exp $
#

PORTNAME=	rasqal
PORTVERSION=	0.9.29
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://download.librdf.org/source/ \
		SF/librdf/${PORTNAME}/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	A high-level interface for RDF

LIB_DEPENDS=	curl.6:${PORTSDIR}/ftp/curl \
		icuuc.50:${PORTSDIR}/devel/icu \
		raptor2.0:${PORTSDIR}/textproc/raptor2 \
		pcre.3:${PORTSDIR}/devel/pcre \
		xml2.5:${PORTSDIR}/textproc/libxml2 \
		xslt.2:${PORTSDIR}/textproc/libxslt \
		yajl.2:${PORTSDIR}/devel/yajl

USE_GNOME=	gnomehack lthack pkgconfig
USE_OPENSSL=	yes
USE_GMAKE=	yes
USE_ICONV=	yes
GNU_CONFIGURE=	yes

USE_LDCONFIG=	yes
USE_PERL5_BUILD=	yes

MAN1=		rasqal-config.1 roqet.1
MAN3=		librasqal.3

OPTIONS+=	MPFR  "Use MPFR library for decimals (implies GMP)" off
OPTIONS+=	GMP   "Use Gnu MP library for decimals" off

.include <bsd.port.options.mk>

# Set to mpfr if MPFR is on, gmp if only GMP is on and none if neither.
# This guards against $user setting both GMP and MPFR, since we can't be
# very verbose in explaining our options.
.if defined(WITH_MPFR)
CONFIGURE_ARGS+=	--with-decimal=mpfr --with-mpfr=${LOCALBASE}
LIB_DEPENDS+=	mpfr.4:${PORTSDIR}/math/mpfr
.elif defined(WITH_GMP)
CONFIGURE_ARGS+=	--with-decimal=gmp
LIB_DEPENDS+=	gmp.10:${PORTSDIR}/math/gmp
.else
CONFIGURE_ARGS+=	--with-decimal=none
.endif

.include <bsd.port.mk>
