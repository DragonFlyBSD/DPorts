# Created by: gahr
# $FreeBSD: deskutils/taskwarrior/Makefile 339084 2014-01-08 10:11:55Z gahr $

PORTNAME=	taskwarrior
PORTVERSION=	2.2.0
CATEGORIES=	deskutils
MASTER_SITES=	http://taskwarrior.org/download/
DISTNAME=	task-${PORTVERSION}

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	A framework for supercharged task and contact management

WRKSRC=		${WRKDIR}/task-${PORTVERSION}

USES=		cmake:outsource shebangfix
SHEBANG_FILES=	scripts/*/*.pl \
		scripts/*/*.rb \
		scripts/*/*.py \
		doc/rc/refresh
CMAKE_ARGS+=	-DTASK_DOCDIR:STRING=${DATADIR:S/${PREFIX}\///} \
   		-DTASK_MAN1DIR:STRING=man/man1 \
		-DTASK_MAN5DIR:STRING=man/man5

.include <bsd.port.mk>
