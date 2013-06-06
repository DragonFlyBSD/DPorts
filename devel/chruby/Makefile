# Created by: Ross Timson <ross@rosstimson.com>
# $FreeBSD: devel/chruby/Makefile 319153 2013-05-27 03:07:20Z swills $

PORTNAME=	chruby
PORTVERSION=	0.3.2
CATEGORIES=	devel ruby
MASTER_SITES=	GH

MAINTAINER=	ross@rosstimson.com
COMMENT=	Changes the current Ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash

PLIST_FILES=	bin/chruby-exec share/chruby/auto.sh share/chruby/chruby.sh
PLIST_DIRS=	share/chruby

SUB_FILES=	pkg-message

USE_GITHUB=	yes
GH_ACCOUNT=	postmodern
GH_PROJECT=	chruby
GH_COMMIT=	872cd1b
GH_TAGNAME=	v${PORTVERSION}

NO_BUILD=	yes

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/bin/chruby-exec ${PREFIX}/bin
	( cd ${WRKSRC}/share/chruby && ${COPYTREE_BIN} \* ${PREFIX}/share/chruby )

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
