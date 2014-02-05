# Created by: Victor Popov
# $FreeBSD: head/security/pam_search_list/Makefile 342030 2014-01-31 16:50:20Z miwi $

PORTNAME=	pam_search_list
PORTVERSION=	0.1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME:S/_/-/g}
DISTNAME=	${PORTNAME:S/_/-/g}-${PORTVERSION}

MAINTAINER=	v.a.popov@gmail.com
COMMENT=	PAM module to search arbitrary file for user

USE_XZ=		yes

PLIST_FILES=	lib/libpam_search_list.a \
		lib/libpam_search_list_p.a \
		lib/pam_search_list.so \
		lib/pam_search_list.so.0 \
		man/man8/pam_search_list.8.gz

.include <bsd.port.mk>
