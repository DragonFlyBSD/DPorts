# New ports collection makefile for:	TiMidity++
# Date created:		27 Feb 1999
# Whom:			Yoichi Asai <yatt@msc.biglobe.ne.jp>
#
# $FreeBSD: ports/audio/timidity++-motif/Makefile,v 1.10 2012/11/17 05:54:46 svnexp Exp $
#

PKGNAMESUFFIX=	-motif

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Motif interface for TiMidity++

MASTERDIR=	${.CURDIR}/../../audio/timidity++

PLIST_FILES=	bin/xmmidi ${TIMID_LIBDIR}/interface_m.so

post-configure:
	@${MV} ${WRKSRC}/interface/Makefile ${WRKSRC}/interface/Makefile.orig
	@${SED} -e 's^m_so_libs = $$^m_so_libs = -L${LOCALBASE}/lib ${MOTIFLIB} -lXt -lXext -lSM -lICE -lX11 ^' \
		-e 's^dynamic_targets = $$^dynamic_targets = interface_m.so^' \
	${WRKSRC}/interface/Makefile.orig > ${WRKSRC}/interface/Makefile

.include "${MASTERDIR}/Makefile"
