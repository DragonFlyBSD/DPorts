# Created by: ijliao
# $FreeBSD: multimedia/podcatcher/Makefile 330054 2013-10-11 03:28:30Z tabthorpe $

PORTNAME=	podcatcher
PORTVERSION=	3.1.6
CATEGORIES=	multimedia ruby
MASTER_SITES=	${MASTER_SITE_RUBYFORGE}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Podcast client for the command line

USE_RUBY=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

PLIST_FILES=	bin/podcatcher \
		${EXAMPLESDIR_REL}/arguments.txt \
		${EXAMPLESDIR_REL}/options.yaml \
		${EXAMPLESDIR_REL}/subscriptions.pcast \
		${EXAMPLESDIR_REL}/subscriptions.opml

PLIST_DIRS=	${EXAMPLESDIR_REL}

NO_STAGE=	yes
pre-install:
	@${SED} -i.bak 's,#!/usr/bin/env ruby,#!${RUBY},' ${WRKSRC}/bin/${PORTNAME}

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/bin/${PORTNAME} ${PREFIX}/bin

post-install:
	@${MKDIR}	${EXAMPLESDIR} \
	&& \
	( cd ${WRKSRC}/demo \
		&& ${COPYTREE_SHARE} \* ${EXAMPLESDIR} \
	)

.include <bsd.port.mk>
