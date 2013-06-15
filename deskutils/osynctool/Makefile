# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: deskutils/osynctool/Makefile 319890 2013-06-04 18:14:34Z bdrewery $

PORTNAME=	osynctool
PORTVERSION=	0.39
CATEGORIES=	deskutils
MASTER_SITES=	http://www.opensync.org/download/releases/${PORTVERSION}/

MAINTAINER=	danilogondolfo@gmail.com
COMMENT=	Command line client for the OpenSync framework

LIB_DEPENDS=	opensync:${PORTSDIR}/devel/libopensync

CONFLICTS=	msynctool-0.2*

USE_BZIP2=	yes
USES=		cmake:outsource pkgconfig

PLIST_FILES=	bin/${PORTNAME} \
		etc/bash_completion.d/${PORTNAME}.sh
PLIST_DIRSTRY=	etc/bash_completion.d

.include <bsd.port.mk>
