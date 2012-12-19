# New ports collection makefile for:	tilda
# Date created:				4 Jan 2005
# Whom:					Vlad V. Teterya <vlad@vlad.uz.ua>
#
# $FreeBSD: ports/x11/tilda/Makefile,v 1.16 2012/11/17 06:03:20 svnexp Exp $
#

PORTNAME=	tilda
PORTVERSION=	0.9.6
PORTREVISION=	5
CATEGORIES=	x11
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	vlad@vlad.uz.ua
COMMENT=	Drop down x11 terminal with transparency support

LIB_DEPENDS=	confuse.0:${PORTSDIR}/devel/libconfuse

GNU_CONFIGURE=	yes
USE_GNOME=	gtk20 libglade2 vte
USE_GMAKE=	yes

DOCS=		AUTHORS ChangeLog README TODO

post-patch:
	@${REINPLACE_CMD} -e 's|ps -C tilda -o pid=|pgrep tilda|' \
		${WRKSRC}/src/tilda.c

post-install:
.if !defined (NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for f in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

	@${ECHO_MSG} ""
	@${ECHO_MSG} ""
	@${ECHO_MSG} "		ATTENTION:"
	@${ECHO_MSG} "		If you are upgrade from version 0.09.1 or below,"
	@${ECHO_MSG} "		you'll need to delete your old config files and "
	@${ECHO_MSG} "		make them again."
	@${ECHO_MSG} ""
	@${ECHO_MSG} ""

.include <bsd.port.mk>
