# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: mail/claws-mail-spamreport/Makefile 329440 2013-10-05 11:25:29Z pawel $

PORTNAME=	spamreport
PORTREVISION=	0

COMMENT=	Spam report plugin for Claws Mail

CLAWS_PLUGINS_BUILD=	spam_report

.include "../claws-mail/Makefile.claws"
PLIST_FILES:=	${PLIST_FILES:S|spam_report|spamreport|g}
.include <bsd.port.mk>
