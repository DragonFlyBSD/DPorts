# Created by: David Naylor <naylor.b.david@gmail.com>
# $FreeBSD: ports/ports-mgmt/portbuilder/Makefile,v 1.14 2013/01/16 20:24:44 svnexp Exp $

PORTNAME=	portbuilder
DISTVERSION=	0.1.5.4
PORTREVISION=	1
CATEGORIES=	ports-mgmt
MASTER_SITES=	http://cloud.github.com/downloads/DragonSA/portbuilder/

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Concurrent FreeBSD port builder

LICENSE=	BSD

USE_PYTHON=	2.6+
USE_PYDISTUTILS=yes
USE_XZ=		yes

PORTDOCS=	BUGS ChangeLog COPYRIGHT README

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
.for file in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
