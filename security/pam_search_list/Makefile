# Created by: Victor Popov
# $FreeBSD: ports/security/pam_search_list/Makefile,v 1.1 2012/12/17 15:06:32 svnexp Exp $

PORTNAME=	pam_search_list
PORTVERSION=	0.1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME:S/_/-/g}
DISTNAME=	${PORTNAME:S/_/-/g}-${PORTVERSION}

MAINTAINER=	v.a.popov@gmail.com
COMMENT=	PAM module to search arbitrary file for user

USE_XZ=		yes

MANCOMPRESSED=	yes
MAN8=		pam_search_list.8

PLIST_FILES=	lib/libpam_search_list.a \
		lib/libpam_search_list_p.a \
		lib/pam_search_list.so \
		lib/pam_search_list.so.0

.include <bsd.port.mk>
