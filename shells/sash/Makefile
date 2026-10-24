PORTNAME=	sash
PORTVERSION=	3.8
PORTREVISION=	1
CATEGORIES=	shells
MASTER_SITES=	http://members.tip.net.au/~dbell/programs/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Stand-Alone shell combining many common utilities
WWW=		https://members.tip.net.au/~dbell/

# https://reviews.freebsd.org/D50718
BROKEN_FreeBSD_15=	requires struct msdosfs_args, which is no longer exposed

dfly-patch:
	${REINPLACE_CMD} -e 's@<ufs/ufs/@<vfs/ufs/@g' \
			 -e 's@<isofs/@<vfs/isofs/@g' \
			 -e 's@<fs/msdosfs/@<vfs/msdosfs/@g' \
			 -e 's@<fs/ntfs/@<vfs/ntfs/@g' \
			 -e '/#include <vfs\/ufs\/extattr.h>/d' \
		${WRKSRC}/cmds.c

.include <bsd.port.mk>
