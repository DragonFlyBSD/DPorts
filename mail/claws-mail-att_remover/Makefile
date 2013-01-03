# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: ports/mail/claws-mail-att_remover/Makefile,v 1.51 2012/12/10 17:32:44 svnexp Exp $

PORTNAME=	att_remover
PORTVERSION=	1.0.15
CATEGORIES=	mail
MASTER_SITES=	http://www.claws-mail.org/downloads/plugins/
PKGNAMEPREFIX=	claws-mail-

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Attachments removing plugin for Claws Mail

LICENSE=	GPLv3

BUILD_DEPENDS=	claws-mail>=3.9.0:${PORTSDIR}/mail/claws-mail
RUN_DEPENDS=	claws-mail>=3.9.0:${PORTSDIR}/mail/claws-mail

USE_GMAKE=	yes
USE_AUTOTOOLS=	autoconf
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	lib/claws-mail/plugins/att_remover.a \
		lib/claws-mail/plugins/att_remover.la \
		lib/claws-mail/plugins/att_remover.so

.include <bsd.port.mk>
