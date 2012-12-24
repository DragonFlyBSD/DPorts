# New ports collection makefile for:	rej
# Date created:				16 Sep 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/sysutils/rej/Makefile,v 1.11 2012/12/16 06:16:59 svnexp Exp $
#

PORTNAME=	rej
PORTVERSION=	0.16
CATEGORIES=	sysutils perl5
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Merges patch-rejects and runs a merge program to verify the changes

USE_PERL5=	yes
NO_BUILD=	yes

PORTDOCS=	CHANGELOG README vimrc
PLIST_FILES=	bin/rej bin/rej-qp bin/rej-mp

.include <bsd.port.pre.mk>

post-patch:
.for f in ${PORTNAME} qp mp
	@${REINPLACE_CMD} -e 's|/usr/bin/perl|${PERL}|' \
		${WRKSRC}/${f}
.endfor
	@${REINPLACE_CMD} -e 's|/bin/bash|${SH}|' \
		${WRKSRC}/runtests.sh

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
.for f in qp mp
	${INSTALL_SCRIPT} ${WRKSRC}/${f} ${PREFIX}/bin/${PORTNAME}-${f}
.endfor

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

run-test: patch
	@cd ${WRKSRC}; ${SH} runtests.sh

.include <bsd.port.post.mk>
