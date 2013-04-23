# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: devel/libevt/Makefile 315993 2013-04-17 17:19:19Z antoine $

PORTNAME=	libevt
DISTVERSION=	alpha-20130415
CATEGORIES=	devel
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Library and tooling to access the Windows Event Log (EVT) format

LICENSE=	LGPL3

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-python
USE_GETTEXT=	yes
USES=		pathfix
USE_ICONV=	yes
USE_PYTHON=	yes
USE_LDCONFIG=	yes

LDFLAGS+=	-L${LOCALBASE}/lib
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:E}

MAN1=		evtexport.1 evtinfo.1
MAN3=		libevt.3

OPTIONS_DEFINE=	DOCS EXAMPLES

PORTDOCS=	AUTHORS ChangeLog
PORTEXAMPLES=	*

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif
.if ${PORT_OPTIONS:MEXAMPLES}
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/${PORTNAME}/* \
		${WRKSRC}/examples/${PORTNAME:S,lib,py,}/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
