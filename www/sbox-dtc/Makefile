# Created by: Thomas Goirand
# $FreeBSD: ports/www/sbox-dtc/Makefile,v 1.9 2012/12/20 03:05:53 svnexp Exp $

PORTNAME=	sbox
PORTVERSION=	1.10
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://files.bsdroot.lv/my/FreeBSD/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A CGI wrapper for Web site hosting services to safely grant CGI

SBOX_UIDMIN?=	1000
SBOX_GIDMIN?=	1000
SBOX_SAFEPATH?=	/bin:/usr/bin:${PREFIX}/bin:${LOCALBASE}/bin
SBOX_LOGFILE?=	/var/log/sbox.log

CFLAGS+=	-DWEB_USER='\"${WWWOWN}\"' \
		-DWEB_GROUP='\"${WWWGRP}\"' \
		-DUID_MIN=${SBOX_UIDMIN} \
		-DGID_MIN=${SBOX_GIDMIN} \
		-DSAFE_PATH='\"${SBOX_SAFEPATH}\"' \
		-DLOG_FILE='\"${SBOX_LOGFILE}\"'

MAKE_ARGS=	CC="${CC}" COPTS="${CFLAGS}" \
		INSTALL_DIRECTORY=${PREFIX}/www/cgi-bin

PLIST_FILES=	www/cgi-bin/sbox
PLIST_DIRS=	www/cgi-bin

PATCH_STRIP=	-p1

pre-su-install:
	${MKDIR} ${PREFIX}/www/cgi-bin

.include <bsd.port.mk>
