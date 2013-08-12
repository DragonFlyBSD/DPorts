# Created by: Pankov Pavel <pankov_p@mail.ru>
# $FreeBSD: mail/nullpop/Makefile 323828 2013-07-28 13:40:25Z wg $

PORTNAME=	nullpop
PORTVERSION=	0.3
CATEGORIES=	mail
MASTER_SITES=	http://thewalter.net/stef/software/nullpop/

MAINTAINER=	pankov_p@mail.ru
COMMENT=	POP3 server that allows logins, but never returns any email

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--libexecdir="${PREFIX}/bin"

PLIST_FILES=	bin/nullpop
MAN8=		nullpop.8

.include <bsd.port.mk>
