# Created by: Andy Gilligan
# $FreeBSD: mail/mb2md/Makefile 323702 2013-07-26 07:33:41Z az $

PORTNAME=	mb2md
PORTVERSION=	3.20
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	http://batleth.sapienti-sat.org/projects/mb2md/
DISTNAME=	${PORTNAME}-${PORTVERSION}.pl
EXTRACT_SUFX=	.gz

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Converts mbox mailboxes to Maildir

RUN_DEPENDS=	p5-TimeDate>=0:${PORTSDIR}/devel/p5-TimeDate

EXTRACT_CMD=	${GZIP_CMD}
EXTRACT_BEFORE_ARGS=	-dc
EXTRACT_AFTER_ARGS=	> ${WRKDIR}/${PORTNAME}

NO_WRKSUBDIR=	yes
NO_BUILD=	yes
USE_PERL5=	yes
USES=		shebangfix
SHEBANG_FILES=	mb2md

PLIST_FILES=	bin/mb2md

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
