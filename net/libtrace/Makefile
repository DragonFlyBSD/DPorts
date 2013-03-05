# Created by: Matt Peterson <matt@peterson.org>
# $FreeBSD: ports/net/libtrace/Makefile,v 1.7 2013/02/18 05:49:50 svnexp Exp $

PORTNAME=	libtrace
PORTVERSION=	3.0.15
CATEGORIES=	net
MASTER_SITES=	http://research.wand.net.nz/software/libtrace/

MAINTAINER=	matt@peterson.org
COMMENT=	C library for network packet capture and processing

LIB_DEPENDS=	pcap:${PORTSDIR}/net/libpcap

CONFIGURE_ARGS=	--with-libpcap=${LOCALBASE}

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_GMAKE=	yes

MAN1=	traceanon.1 traceconvert.1 tracefilter.1 tracemerge.1 \
	tracereport.1 tracertstats.1 tracesplit.1 tracepktdump.1 \
	tracesplit_dir.1 tracestats.1 tracesummary.1 tracereplay.1 \
	tracediff.1 traceends.1 tracetop.1 tracetopends.1

LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	@${REINPLACE_CMD} -e 's|echo aout|echo elf|g' \
	${WRKSRC}/configure

.include <bsd.port.mk>
