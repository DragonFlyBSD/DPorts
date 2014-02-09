# Created by: gahr
# $FreeBSD: head/deskutils/taskwarrior/Makefile 339903 2014-01-16 09:07:09Z gahr $

PORTNAME=	taskwarrior
PORTVERSION=	2.3.0
CATEGORIES=	deskutils
MASTER_SITES=	http://taskwarrior.org/download/
DISTNAME=	task-${PORTVERSION}

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Feature-rich command-line todo list manager

LICENSE=	MIT

LIB_DEPENDS=	libgnutls.so:${PORTSDIR}/security/gnutls

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
