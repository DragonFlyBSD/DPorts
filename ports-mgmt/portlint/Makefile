# Created by: Jun-ichiro itojun Hagino <itojun@itojun.org>
# $FreeBSD: ports-mgmt/portlint/Makefile 322990 2013-07-14 16:15:21Z marcus $
#
# This port is self contained in the src directory.
#

PORTNAME=	portlint
PORTVERSION=	2.14.4
CATEGORIES=	ports-mgmt
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	marcus@FreeBSD.org
COMMENT=	A verifier for FreeBSD port directory

USES=		shebangfix
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/src
USE_PERL5_RUN=	yes

SRC=		${.CURDIR}/src

MAN1=		portlint.1
PLIST_FILES=	bin/portlint
SHEBANG_FILES=	*.pl

.if !defined(NOPORTEXAMPLES)
PLIST_FILES+=	%%EXAMPLESDIR%%/portlintgrep
PLIST_DIRS=	%%EXAMPLESDIR%%
.endif

do-fetch:
	@${DO_NADA}

do-extract:
	@${MKDIR} ${WRKSRC}
	@${CP} ${SRC}/* ${WRKSRC}/

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/ports|/usr/dports|g' ${WRKSRC}/portlint*

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/portlint.pl ${PREFIX}/bin/portlint
	${INSTALL_MAN} ${WRKSRC}/portlint.1 ${MAN1PREFIX}/man/man1
.if !defined(NOPORTEXAMPLES)
	${INSTALL} -o ${SHAREOWN} -g ${SHAREGRP} -m ${BINMODE} -d ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/portlintgrep.pl ${EXAMPLESDIR}/portlintgrep
.endif

.include <bsd.port.mk>
