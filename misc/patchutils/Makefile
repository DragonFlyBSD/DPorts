# Created by: ijliao
# $FreeBSD: misc/patchutils/Makefile 338049 2013-12-29 22:02:31Z johans $

PORTNAME=	patchutils
PORTVERSION=	0.3.3
CATEGORIES=	misc
MASTER_SITES=	http://cyberelk.net/tim/data/patchutils/stable/

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Small collection of programs that operate on patch files

USE_XZ=		yes
USES=		perl5
USE_PERL5=	run build patch
GNU_CONFIGURE=	yes

post-patch:
	@${GREP} -lR "#!/bin/bash" ${WRKSRC} | ${XARGS} ${PERL} -pi.bak -e \
		"s,#!/bin/bash,#!/bin/sh,"

.include <bsd.port.mk>
