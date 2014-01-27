# Created by: Roman Bogorodskiy
# $FreeBSD: devel/phptags/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	phptags
PORTVERSION=	0.3.0
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Create a tags file from PHP sources

GNU_CONFIGURE=	yes

MAN1=		phptags.1
PLIST_FILES=	bin/phptags \
		etc/phptags.conf.sample
PORTDOCS=	AUTHORS TODO README ChangeLog INSTALL

NO_STAGE=	yes
post-install:
	@${INSTALL_DATA} ${WRKSRC}/phptags.conf.sample ${PREFIX}/etc
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
