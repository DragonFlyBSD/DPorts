# Created by: Andrew Shevtsov <nyxo@dnuc.polyn.kiae.su>
# $FreeBSD: benchmarks/dbench/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	dbench
PORTVERSION=	4.0
PORTREVISION=	2
CATEGORIES=	benchmarks
MASTER_SITES=	SAMBA
MASTER_SITE_SUBDIR=	../../ftp/tridge/dbench

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	A simulation of the Ziff-Davis netbench benchmark

LIB_DEPENDS=	libpopt.so:${PORTSDIR}/devel/popt

LICENSE=	GPLv3

CFLAGS+=	-I${LOCALBASE}/include
USE_AUTOTOOLS=	autoconf
GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	LIBS="-L${LOCALBASE}/lib"
CONFIGURE_ARGS+=--datadir=${DATADIR}

MAN1=		dbench.1
MLINKS=		dbench.1 tbench.1 dbench.1 tbench_srv.1

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's,$$(mandir),$$(mandir)/man1,' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
